# NAME OF EXECUTABLE
NAME = ModernWarfare

# COMPILER
CC = clang++
CFLAGS = -std=c++17 -Wall -Wextra -Werror -g

# DIRECTORIES
SRCDIR = ./Srcs/
OBJDIR = ./Objs/
INCDIR = ./Includes/

# SRCS & OBJS
SRCS = Main.cpp \
		Weapon.cpp \
		AssaultRifle.cpp \
		SubMachineGun.cpp \
		LightMachineGun.cpp \
		MarksmanRifle.cpp \
		SniperRifle.cpp \
		GenerateWeapons.cpp
OBJS = $(addprefix $(OBJDIR),$(SRCS:.cpp=.o))

all: objs $(NAME)

objs:
	mkdir -p $(OBJDIR)

$(OBJDIR)%.o:$(SRCDIR)%.cpp
	$(CC) $(CFLAGS) -I $(INCDIR) -o $@ -c $<

$(NAME):$(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

clean:
	rm -rf $(OBJDIR)

fclean: clean
	rm -f $(NAME)

re:
	@$(MAKE) fclean
	@$(MAKE) all

.PHONY: all clean fclean re
