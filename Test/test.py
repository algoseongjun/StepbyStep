import subprocess
import os

def testSampleData(codeDir, inputSample, OutputSample):
    if codeDir == None:
        print(f"\ncodeDir does not exist...")
        return
    
    passed = 0
    total = len(inputSample)
    process = subprocess.Popen(['g++', codeDir, '-o', 'test.exe'], stdout=subprocess.PIPE, stderr=subprocess.PIPE)
    stdout, stderr = process.communicate()
    if process.returncode != 0:
        print(f"컴파일 실패:\n{stderr.decode()}")
        return
    
    for i in range(total):
        input_data = inputSample[i]
        expected_output = OutputSample[i]
        process = subprocess.Popen(['./test'], stdin=subprocess.PIPE, stdout=subprocess.PIPE, stderr=subprocess.PIPE, text=True)
        stdout, stderr = process.communicate(input=input_data)
        stdout = stdout.strip()
        expected_output = expected_output.strip()
        if stdout == expected_output:
            print(f"테스트 {i+1}: 통과")
            passed += 1
        else:
            print(f"테스트 {i+1}: 실패\n  예상 출력: {expected_output}\n  실제 출력: {stdout}\n  오류: {stderr.decode()}")
    print(f"\n총 {passed}/{total} 테스트 통과")

    if os.path.exists("test.exe"):
        os.remove("test.exe")


if __name__ == "__main__":
    ProblemNumber = 1085
    codeDir = "C:\\Users\\seong\\OneDrive\\Desktop\\vscode\\Algo\\StepbyStep\\Step10\\Problem1085.cpp"
    inputSample = ['6 2 10 3\n', '1 1 5 5\n', '653 375 1000 1000\n', '161 181 762 375\n']
    outputSample = ['1\n', '1\n', '347\n', '161\n']
    testSampleData(codeDir, inputSample, outputSample)