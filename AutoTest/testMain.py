import unittest
from main import runProblem

class testMain(unittest.TestCase):
    def test_problem_1(self):
        runProblem("1000") 

    def test_problem_2(self):
        runProblem("8393")
    
    def test_problem_3(self):
        runProblem("10810")


if __name__ == "__main__":
    unittest.main()