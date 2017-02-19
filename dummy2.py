import requests

URL="https://web-app-207da.firebaseio.com/users.json"

response = requests.request('get', URL).json();


print response['-KUSikx2el_xYGgDSZse']
