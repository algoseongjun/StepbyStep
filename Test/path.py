import os

def CodeDir(ProblemNumber):
    rootDir = "C:\\Users\\seong\\OneDrive\\Desktop\\vscode\\Algo\\StepbyStep\\"
    for root, dirs, files in os.walk(rootDir):
        if f"Problem{ProblemNumber}.cpp" in files:
            return os.path.join(root, f"Problem{ProblemNumber}.cpp")

if __name__ == "__main__":
    ProblemNumber = 1085
    codeDir = CodeDir(ProblemNumber)
    print(f"codeDir: {codeDir}")