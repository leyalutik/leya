import sys
import urllib.request
from bs4 import BeautifulSoup

# Получаем аргумент из командной строки
if len(sys.argv) != 2:
    print("Использование: python3 name_program.py <слово>")
    sys.exit(1)

word = sys.argv[1]

url = f"https://www.etymonline.com/search?q={word}"
headers = {'User-Agent': 'Mozilla/5.0'}

req = urllib.request.Request(url, headers=headers)
with urllib.request.urlopen(req) as response:
    content = response.read()

soup = BeautifulSoup(content, 'html.parser')
div_content = soup.find('div', class_='word__etymology_expand--1s7tE')

if div_content:
    print(div_content.text)
else:
    print("Элемент не найден")
