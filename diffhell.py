def enc():
	import random
	x=raw_input("Enter Public keys: ").split()
	p=int(x[0])
	g=int(x[1])
	a=random.randint(0,50)
	key1=g**a%p
	b=random.randint(0,50)
	key2=g**b%p
	sec1=key1**a%p
	sec2=key2**b%p
	if sec1==sec2:
		print "Keys matched"
	else:
		print "Not matched"

enc()



