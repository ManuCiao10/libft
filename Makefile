NAME		= libft.a

CC			= gcc
CFLAGS		= -Wall -Wextra -Werror -I includes
RM			= rm -f
AR			= ar rcs
HEADER = $(addsuffix .h, $(addprefix includes/, ))

SRCS_PATH = src/

EPANSION = python3 src/

FTIS = ft_isalnum ft_isalpha ft_isascii ft_isdigit ft_isprint
FTSKIP = space spacenl char chars
FTLST = ft_lstadd_back ft_lstadd_front ft_lstclear ft_lstdelone ft_lstiter \
		ft_lstlast ft_lstmap ft_lstnew ft_lstsize
FTMATH = abs nbrlen hexlen baselen power
FTMEM = ft_bzero ft_calloc ft_memcpy ft_memchr ft_memcmp ft_memcpy ft_memmove ft_memset
FTPUT = ft_putchar_fd ft_putendl_fd ft_putnbr_fd ft_putstr_fd
FTSTR = ft_strchr ft_strncmp ft_strdup ft_strjoin ft_strlcat \
		ft_strlcpy ft_strlen ft_strmapi ft_strncmp ft_strnstr \
		ft_strrchr ft_strtrim 
FTSUB = ft_substr ft_split
FTTO = ft_tolower ft_toupper ft_atoi ft_itoa ft_char_to_base
FTLEN = ft_intlen



SRCS = $(addsuffix .c, $(addprefix $(SRCS_PATH)ft_is/, $(FTIS))) \
	$(addsuffix .c, $(addprefix $(SRCS_PATH)ft_lst/, $(FTLST))) \
	$(addsuffix .c, $(addprefix $(SRCS_PATH)ft_mem/, $(FTMEM))) \
	$(addsuffix .c, $(addprefix $(SRCS_PATH)ft_put/, $(FTPUT))) \
	$(addsuffix .c, $(addprefix $(SRCS_PATH)ft_str/, $(FTSTR))) \
	$(addsuffix .c, $(addprefix $(SRCS_PATH)ft_sub/, $(FTSUB))) \
	$(addsuffix .c, $(addprefix $(SRCS_PATH)ft_to/, $(FTTO))) \
	$(addsuffix .c, $(addprefix $(SRCS_PATH)ft_len/, $(FTLEN))) \

FORMAT := $(shell python3 -m c_formatter_42 $(SRCS))

OBJS		= $(SRCS:.c=.o)
BONUS_OBJS		= $(BONUS_SRCS:.c=.o)

$(NAME):	$(OBJS)
			-@$(AR) $(NAME) $(OBJS)

all:		$(NAME)

bonus:		$(OBJS) $(BONUS_OBJS)
			-@$(AR) $(NAME) $(OBJ) $(BONUS_OBJS)

clean:
			-@$(RM) $(OBJS) $(BONUS_OBJS)

fclean:		clean
			-@$(RM) $(NAME)

re:			fclean all

.PHONY:		all bonus clean fclean re
