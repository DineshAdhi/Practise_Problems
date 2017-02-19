from wit import Wit
import json

def sayhello(request):
    print('From function : HEllo')

def send(request, response):
    print('Sending to user...', response['text'])


actions={
    'sayhello' : sayhello,
    'send' : send,
}

client= Wit(access_token="PRAD2LHDBGWGT3ELPIVDDJDBADXUQX7L", actions=actions)

resp = client.message("What's the score of South Africa?")

print(resp)
