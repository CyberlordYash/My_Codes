import requests
from tqdm import tqdm
import os
import sys
from pathlib import Path
lecturl = []
lectlist = []
pdfurl = []
pdflist = []
day_no = int(input("Please enter Day Number\n"))
lecture_count = int(input("How many lectures are there?\n"))
pdf_count = int(input("How many PDFs are there?\n"))
os.mkdir(path)
for i in range(0,lecture_count):
  file_url = input("Please enter Lecture " + str((i+1)) + " URL\n")
  lecture_name=input("Please enter lecture name:\n")
  lecturl.append(file_url)
  lectlist.append(lecture_name)
for i in range(0,pdf_count):
  file_url = input("Please enter PDF " + str((i+1)) + " URL\n")
  lecture_name=input("Please enter PDF name:\n")
  pdfurl.append(file_url)
  pdflist.append(lecture_name)
for i in range(0,lecture_count):
    print("Now Downloading: " + str(lectlist[i]))
    with open("/content/gdrive/Shareddrives/JEE/ATP Star/Gladiator/Day "+ str(day_no) +"/" + str(lectlist[i]) + ".mp4", "wb") as file:
        response = requests.get(lecturl[i], stream=True)
        total = response.headers.get('content-length')

        if total is None:
            f.write(response.content)
        else:
            downloaded = 0
            total = int(total)
            for data in response.iter_content(chunk_size=max(int(total/1000), 1024*1024)):
                downloaded += len(data)
                file.write(data)
                done = int(50*downloaded/total)
                sys.stdout.write('\r[{}{}]'.format('█' * done, '.' * (50-done)))
                sys.stdout.flush()
    sys.stdout.write('\n')
    os.system('cls')
print("Now its time to save the PDFs!\n")
for i in range(0,pdf_count):
    print("Now Downloading: " + str(pdflist[i]))
    with open("/content/gdrive/Shareddrives/JEE/ATP Star/Gladiator/Day "+ str(day_no) +"/" + str(pdflist[i]) + ".pdf", "wb") as file:
        response = requests.get(pdfurl[i], stream=True)
        total = response.headers.get('content-length')
        if total is None:
            f.write(response.content)
        else:
            downloaded = 0
            total = int(total)
            for data in response.iter_content(chunk_size=max(int(total/1000), 1024*1024)):
                downloaded += len(data)
                file.write(data)
                done = int(50*downloaded/total)
                sys.stdout.write('\r[{}{}]'.format('█' * done, '.' * (50-done)))
                sys.stdout.flush()
    sys.stdout.write('\n')
    os.system('cls')