all: stats.c
	gcc -o out stats.c

stats.c:
	gcc -c stats.c
run:
	./a.out

clean:
	rm -rf *.out
