# https://www.youtube.com/watch?v=a8mPKBxQ9No

# put the filename here:
VAR1 = function2

VAR2 = hello

chris: $(VAR1).c
	gcc -o $(VAR2) $(VAR1).c
	sleep 2
	echo " "
	./$(VAR2)

clear:
	rm $(VAR2)