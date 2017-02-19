import facebook
import requests

allfirends=[]
graph=facebook.GraphAPI("EAACEdEose0cBAHZBmyJt06GzFhJp67vtAuv3D9MIST3mmBth6r4cHZBKLIKuC7B58zgtObDxKQEaLkqu84qWZA7CiemtZAzNSIfFRJ8YvwRE3ZCJLUyhAuPs92DfZBYPE3SEZC88sGZCLhinUExT8M3FzVgj5dvyZAGMoAXjuNkbnZBQZDZD")
profile=graph.get_object("me")
friends=graph.get_object("me/friends")
for friend in friends['data']:
    allfirends.append(friend['name'])
    friends=requests.get(friends['paging']['cursors']['after']).json()
print allfirends
print friends['paging']['cursors']['after']



#https://developers.facebook.com/tools/explorer/145634995501895/?method=GET&path=%7Bfriend-list-id%7D&version=v2.6
