from path import CodeDir
from crawl import crawlingSampleData
from test import testSampleData

ProblemNumber = input("Enter ProblemNumber: ")
print(f"\nTesting ProblemNumber{ProblemNumber}...\n")
codeDir = CodeDir(ProblemNumber)
inputSample, outputSample = crawlingSampleData(ProblemNumber)
testSampleData(codeDir, inputSample, outputSample)