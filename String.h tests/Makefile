# CC= gcc
# CFLAGS= -Wall -Werror -Wextra
# S21_STRLEN = -DSTRLEN
# S21_STRCMP = -DSTRCMP
# S21_STRCPY = -DSTRCPY
# S21_STRCAT = -DSTRCAT
# STR_TEST = s21_string_test.c
# STRING = s21_string.c
# QUEST_1 = ../build/Quest_1
# QUEST_2 = ../build/Quest_2
# QUEST_3 = ../build/Quest_3
# QUEST_4 = ../build/Quest_4


# strlen_tests:
# $(CC) $(CFLAGS) $(S21_STRLEN) $(STR_TEST) $(STRING) -o $(QUEST_1)
# strcmp_tests:
# $(CC) $(CFLAGS) $(S21_STRCMP) $(STR_TEST) $(STRING) -o $(QUEST_2)
# strcpy_tests:
# $(CC) $(CFLAGS) $(S21_STRCPY) $(STR_TEST) $(STRING) -o $(QUEST_3)
# strcat_tests:
# $(CC) $(CFLAGS) $(S21_STRCAT) $(STR_TEST) $(STRING) -o $(QUEST_4)

CC=gcc
CFLAGS=-Wall -Wextra -Werror
BUILD=../build/

strlen_tests: s21_string.o s21_string_test_strlen.o
	$(CC) $(CFLAGS) s21_string.o s21_string_test.o -o $(BUILD)Quest_1

strcmp_tests: s21_string.o s21_string_test_strcmp.o
	$(CC) $(CFLAGS) s21_string.o s21_string_test.o -o $(BUILD)Quest_2

strcpy_tests: s21_string.o s21_string_test_strcpy.o
	$(CC) $(CFLAGS) s21_string.o s21_string_test.o -o $(BUILD)Quest_3

strcat_tests: s21_string.o s21_string_test_strcat.o
	$(CC) $(CFLAGS) s21_string.o s21_string_test.o -o $(BUILD)Quest_4

s21_string.o: s21_string.c
	$(CC) $(CFLAGS) s21_string.c -c

s21_string_test_strlen.o: s21_string_test.c
	$(CC) $(CFLAGS) -DSTRLEN s21_string_test.c -c

s21_string_test_strcmp.o: s21_string_test.c
	$(CC) $(CFLAGS) -DSTRCMP s21_string_test.c -c

s21_string_test_strcpy.o: s21_string_test.c
	$(CC) $(CFLAGS) -DSTRCPY s21_string_test.c -c

s21_string_test_strcat.o: s21_string_test.c
	$(CC) $(CFLAGS) -DSTRCAT s21_string_test.c -c

clean:
	rm -rf *.o $(BUILD)Quest_1 $(BUILD)Quest_2 $(BUILD)Quest_3 $(BUILD)Quest_4

rebuild_strlen: clean strlen_tests

rebuild_strcmp: clean strcmp_tests

rebuild_strcpy: clean strcpy_tests

rebuild_strcat: clean strcat_tests