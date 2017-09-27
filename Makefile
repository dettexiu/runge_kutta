TARGET := rungekutta
EXTENSION := cpp
CC := g++

CFLAGS := -g -Wall -Wextra -std=c++11 -MMD -MP
LDFLAGS := -lm
LIBS :=

INCLUDE := -I ./include
SRC_DIR := ./src
OBJ_DIR := ./build

SOURCES := $(shell ls $(SRC_DIR)/*.$(EXTENSION))
OBJS := $(subst $(SRC_DIR), $(OBJ_DIR), $(SOURCES:.$(EXTENSION)=.o))
DEPENDS := $(OBJS:.o=.d)

all: $(TARGET)

$(TARGET): $(OBJS) $(LIBS)
	$(CC) -o $@ $(OBJS) $(LDFLAGS)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.$(EXTENSION)
	@if [ ! -d $(OBJ_DIR) ]; \
	then echo "mkdir -p $(OBJ_DIR)"; mkdir -p $(OBJ_DIR); \
	fi
	$(CC) $(CFLAGS) $(INCLUDE) -o $@ -c $<

clean:
	$(RM) $(OBJS) $(TARGET) $(DEPENDS)

-include $(DEPENDS)

.PHONY: all clean
