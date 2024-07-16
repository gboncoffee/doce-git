CC = clang

doces: doces.c
	$(CC) -g $^ -o $@
