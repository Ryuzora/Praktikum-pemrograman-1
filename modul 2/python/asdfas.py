import random
import string
import time
import os

target = "rakha kontolodon"
letter = ""
i = 0
letters = string.ascii_lowercase + string.whitespace
while letter != target:
  huruf = random.choice(letters)
  os.system("cls")
  print(letter+huruf)
  if huruf == target[i]:
    letter += huruf
    i += 1
  # time.sleep(.01)
os.system("cls")
print(letter)