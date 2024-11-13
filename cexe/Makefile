CC = gcc
DIR = ./bin
FILE = main


all: compile run clean
.PHONY: all

compile:
  $(CC) $(DIR)/$(FILE).c -o $(DIR)/$(FILE)


run:
  $(DIR)/$(FILE)


gdb:
  gdb $(DIR)/$(FILE)


clean:
  rm $(DIR)/*.o
