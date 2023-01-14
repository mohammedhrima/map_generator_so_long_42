CC = cc
SAN = -fsanitize=address -g3
SRC = map_generator.c
LIB = ./Libft/libft.a
OUT = ./a.out
RM = rm -rf
H = 100
W = 100
C = 10

$(OUT):
	@$(CC) $(LIB) $(SRC) -D W=$(W) -D H=$(H) -D C=$(C)
	@$(OUT) > map.ber
	@$(RM) $(OUT)

all: $(OUT)

san:$(SRC)
	@$(CC) $(SAN) $(LIB) $(SRC)

clean:
	@$(RM) $(OUT)

re: clean all
