CC= gcc
CFLAGS= -Wall -Werror -Wextra
S21_STRLEN = -DSTRLEN
S21_STRCMP = -DSTRCMP
S21_STRCPY = -DSTRCPY
S21_STRCAT = -DSTRCAT
STR_TEST = s21_string_test.c
STRING = s21_string.c
QUEST_1 = STRLEN
QUEST_2 = STRCMP
QUEST_3 = STRCPY
QUEST_4 = STRCAT


strlen_tests:
	$(CC) $(CFLAGS) $(S21_STRLEN) $(STR_TEST) $(STRING) -o $(QUEST_1)

strcmp_tests:
	$(CC) $(CFLAGS) $(S21_STRCMP) $(STR_TEST) $(STRING) -o $(QUEST_2)

strcpy_tests:
	$(CC) $(CFLAGS) $(S21_STRCPY) $(STR_TEST) $(STRING) -o $(QUEST_3)

strcat_tests:
	$(CC) $(CFLAGS) $(S21_STRCAT) $(STR_TEST) $(STRING) -o $(QUEST_4)
