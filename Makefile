CC = cc
CFLAGS = -Wall -Werror -Wextra
SERVER = server
CLIENT = client

SERVER_SRC = server.c
CLIENT_SRC = client.c

SERVER_OBJ = $(patsubst %.c,%.o,$(SERVER_SRC))
CLIENT_OBJ = $(patsubst %.c,%.o,$(CLIENT_SRC))

LIBFT = libft.a

all: $(SERVER) $(CLIENT)

$(SERVER): $(LIBFT) $(SERVER_OBJ)
	$(CC) $(CFLAGS) $(SERVER_OBJ) $(LIBFT) -o $@

$(CLIENT): $(LIBFT) $(CLIENT_OBJ)
	$(CC) $(CFLAGS) $(CLIENT_OBJ) $(LIBFT) -o $@

$(LIBFT):
	@$(MAKE) -C libft
	@echo "<$(NAME)> MOVING HEADER AND ARCHIVE OUT"
	@cp libft/libft.h libft.h
	@mv libft/libft.a libft.a

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(SERVER_OBJ) $(CLIENT_OBJ) $(LIBFT) libft.h
	make -C libft fclean

fclean: clean
	rm -f $(SERVER) $(CLIENT)

re: fclean all

.PHONY: all clean fclean re
