def keygen():
	import random
	p,g=map(int,raw_input("Enter Public keys: ").split())
	#p=int(x[0])
	#g=int(x[1])
	b=random.randint(0,50)
	key1=g**b%p
	print "Generated key: ",key1
	print "Private key: ",b
	return str(key1),p,b


def seckey(msg,p,b):

	sk=(int(msg)**b)%p
	print "Secret Keys: ",sk
	return sk


def keycheck(msg,sk):
	if sk==int(msg):
		print "Keys Matched!!!"
	else:
		print "keys not matched!!!"

import socket

serv=socket.socket(socket.AF_INET,socket.SOCK_STREAM)

host=socket.gethostbyname("")

port=9999

serv.bind((host,port))

serv.listen(5)

print "\t******************"
print "\t*SERVER IS ONLINE*"
print "\t******************\n"
while True:
	cli,addr=serv.accept()
	print "--------------------------------------------"
	print "\t\tClient Connected\n"
	k,p,b=keygen()
	cli.send(k)
	msg=cli.recv(4096)
	s=seckey(msg,p,b)
	msg=cli.recv(4096)
	print "received secret key: ",msg
	keycheck(msg,s)
	print "\n\t\t  Client Left"
	print "--------------------------------------------"
	cli.close()


