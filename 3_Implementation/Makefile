# ########################################################################
# ####################### Makefile Template ##############################
# ########################################################################

# # Compiler settings - Can be customized.
# CC = gcc
# CXXFLAGS = -std=c11 -Wall
# LDFLAGS = 

# # Makefile settings - Can be customized.
# APPNAME = myapp
# EXT = .c
# SRCDIR = src
# OBJDIR = obj

# ############## Do not change anything from here downwards! #############
# SRC = $(wildcard $(SRCDIR)/*$(EXT))
# OBJ = $(SRC:$(SRCDIR)/%$(EXT)=$(OBJDIR)/%.o)
# DEP = $(OBJ:$(OBJDIR)/%.o=%.d)
# # UNIX-based OS variables & settings
# RM = rm
# DELOBJ = $(OBJ)
# # Windows OS variables & settings
# DEL = del
# EXE = .exe
# WDELOBJ = $(SRC:$(SRCDIR)/%$(EXT)=$(OBJDIR)\\%.o)

# ########################################################################
# ####################### Targets beginning here #########################
# ########################################################################

# all: $(APPNAME)

# # Builds the app
# $(APPNAME): $(OBJ)
# 	$(CC) $(CXXFLAGS) -o $@ $^ $(LDFLAGS)

# # Creates the dependecy rules
# %.d: $(SRCDIR)/%$(EXT)
# 	@$(CPP) $(CFLAGS) $< -MM -MT $(@:%.d=$(OBJDIR)/%.o) >$@

# # Includes all .h files
# -include $(DEP)

# # Building rule for .o files and its .c/.cpp in combination with all .h
# $(OBJDIR)/%.o: $(SRCDIR)/%$(EXT)
# 	$(CC) $(CXXFLAGS) -o $@ -c $<

# ################### Cleaning rules for Unix-based OS ###################
# # Cleans complete project
# .PHONY: clean
# clean:
# 	$(RM) $(DELOBJ) $(DEP) $(APPNAME)

# # Cleans only all files with the extension .d
# .PHONY: cleandep
# cleandep:
# 	$(RM) $(DEP)

# #################### Cleaning rules for Windows OS #####################
# # Cleans complete project
# .PHONY: cleanw
# cleanw:
# 	$(DEL) $(WDELOBJ) $(DEP) $(APPNAME)$(EXE)

# # Cleans only all files with the extension .d
# .PHONY: cleandepw
# cleandepw:
# 	$(DEL) $(DEP)


PROJ_NAME = Movie Ticket Booking System
SRC = main.c\
src/bookTicket.c

TEST_SRC =test/test.c\
unity/unity.c
 

ifdef OS
   RM = del /q
   FixPath = $(subst /,\,$1)
   EXEC = exe
else
   ifeq ($(shell uname), Linux)
      RM = rm -rf
      FixPath = $1
	  EXEC = out
   endif
endif

build:
	gcc $(SRC) -Iinc -o $(call FixPath,$(PROJ_NAME).$(EXEC)) -lm

run: build
	./$(call FixPath,$(PROJ_NAME).$(EXEC))

static_analysis:
	cppcheck --enable=all $(SRC)

test: $(SRC) $(TEST_SRC)
	gcc $^ $(INC) -o $(call FixPath,$(BUILD_DIR)/$(TEST_PROJ_NAME).$(EXEC))
	./$(BUILD_DIR)/$(TEST_PROJ_NAME).$(EXEC)



coverage:${PROJECT_NAME}
	gcc -fprofile-arcs -ftest-coverage $(SRC) $(INC) -o $(call FixPath,$(BUILD_DIR)/$(TEST_PROJ_NAME).$(EXEC))
	$(call FixPath,$(BUILD_DIR)/$(TEST_PROJ_NAME).$(EXEC))
	gcov -a $(SRC)



doc:
	make -C doc


clean:
	$(RM) $(call FixPath,$(PROJ_NAME).$(EXEC))