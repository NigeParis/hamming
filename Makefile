# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: 42_Legin <Nige@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/12 15:39:53 by 42_Legin          #+#    #+#              #
#    Updated: 2023/06/12 16:00:22 by 42_Legin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
EXEC=hamming
CFLAGS=-Wall
CFLAGS+=-Wextra
CFLAGS+=-Werror
CC=gcc
SRC_FILE=hamming

.PHONY: run
run:	$(EXEC)
		@echo "\nRunning.........."
		./$(EXEC)

$(EXEC): main.o $(SRC_FILE).o
	@echo "\nLinking.........."
	$(CC) $^ -o $(EXEC)

main.o: main.c $(SRC_FILE).h
	@clear
	@echo "Compiling main and headers......"
	$(CC) $(CFLAGS) -c main.c

$(SRC_FILE).o: $(SRC_FILE).c
	@echo "Compiling source files......."
	$(CC) $(CFLAGS) -c $(SRC_FILE).c


.PHONY: clean
clean : 
	@clear
	@echo "\nCleaning......"
	rm -rf $(EXEC) *.o
