import requests
from bs4 import BeautifulSoup 

def crawlingSampleData(ProblemNumber):
    url = f"https://www.acmicpc.net/problem/{ProblemNumber}"
    headers = {"User-Agent": "Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/136.0.0.0 Safari/537.36"}
    response = requests.get(url, headers=headers)
    soup = BeautifulSoup(response.text, 'html.parser')
    inputSample = [sample.get_text() for sample in soup.find_all("pre", {"class": "sampledata", "id": lambda x: x.startswith("sample-input")})]
    outputSample = [sample.get_text() for sample in soup.find_all("pre", {"class": "sampledata", "id": lambda x: x.startswith("sample-output")})]
    return inputSample, outputSample

if __name__ == "__main__":
    ProblemNumber = 1085
    inputSample, outputSample = crawlingSampleData(ProblemNumber)
    print(f"inputSample: \n{inputSample}")
    print(f"outputSample: \n{outputSample}")
    
    
