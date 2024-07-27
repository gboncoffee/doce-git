# Makefile para o programa que mostra nossos doces preferidos.
CC = clang

doces: doces.c
	$(CC) -g $^ -o $@
