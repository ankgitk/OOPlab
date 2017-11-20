def keygen():
	import random
	p,g=map(int,raw_input("Enter Public keys: ").split())
	#p=int(x[0])
	#g=int(x[1])
	a=random.randint(0,50)
	key2=g**a%p
	print "Generated key: ",key2
	print "Private key: ",a
	return str(key2),p,a

def seckey(msg,p,a):
	sk=int(msg)**a%p
	print "secret key: ",sk
	return str(sk)


import socket
cli=socket.socket(socket.AF_INET,socket.SOCK_STREAM)
host=socket.gethostbyname("")
port=9999
cli.connect((host,port))
print "--------------------------------------------"
print "\t   Connected to Server\n"
k,p,a=keygen()
cli.send(k)
msg=cli.recv(4096)
cli.send(seckey(msg,p,a))
print "\n\tDisconnected from Server"
print "--------------------------------------------"
cli.close()