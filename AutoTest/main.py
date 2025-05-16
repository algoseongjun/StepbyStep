from func.path import CodeDir
from func.crawl import crawlingSampleData
from func.test import testSampleData

def runProblem(ProblemNumber):
    print(f"\nTesting ProblemNumber{ProblemNumber}...\n")
    code_dir = CodeDir(ProblemNumber)
    input_sample, output_sample = crawlingSampleData(ProblemNumber)
    testSampleData(code_dir, input_sample, output_sample)

if __name__ == "__main__":
    ProblemNumber = input("Enter ProblemNumber: ")
    runProblem(ProblemNumber)