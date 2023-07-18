#include <stdio.h>

void pong(int ball_pos_x, int ball_pos_y, int left_rocket_pos, int right_rocket_pos, int ball_speed_x,
          int ball_speed_y, int score_left, int score_right) {
    printf("\e[1;1H\e[2J");
    for (int i = 0; i < 26; i++) {
        for (int j = 0; j < 80; j++) {
            if (i == 0 || i == 25) {
                printf("-");
            } else if (j == 0 || j == 79) {
                printf("|");
            } else if (i == 3 && j == 37) {
                printf("%d", score_left);
            } else if (i == 3 && j == 43) {
                printf("%d", score_right);

            } else if (j == ball_pos_x && i == ball_pos_y) {
                printf("@");
            } else if (j == 40) {
                printf("|");
            } else if (j == 3 &&
                       (i == left_rocket_pos || i == left_rocket_pos + 1 || i == left_rocket_pos - 1)) {
                printf("|");
            } else if (j == 76 &&
                       (i == right_rocket_pos || i == right_rocket_pos + 1 || i == right_rocket_pos - 1)) {
                printf("|");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}

int main() {
    static int score_left = 0, score_right = 0;
    int ball_pos_x = 40, ball_pos_y = 13;
    int left_rocket_pos = 13, right_rocket_pos = 13;
    int ball_speed_x = 1, ball_speed_y = -1;
    while (score_left < 21 && score_right < 21) {
        char symb, next;
        if (scanf("%c%c", &symb, &next) == 2 && next == '\n') {
            if (symb == 'a' && left_rocket_pos - 2 > 0) {
                left_rocket_pos--;
            } else if (symb == 'z' && left_rocket_pos + 1 < 24) {
                left_rocket_pos++;
            } else if (symb == 'k' && right_rocket_pos - 2 > 0) {
                right_rocket_pos--;
            } else if (symb == 'm' && right_rocket_pos + 1 < 24) {
                right_rocket_pos++;
            }

            if (ball_pos_x == 2 || ball_pos_x == 78) {
                ball_speed_x = -ball_speed_x;
            } else if (ball_pos_y == 1 || ball_pos_y == 24) {
                ball_speed_y = -ball_speed_y;
            } else if (ball_pos_x == 4 &&
                       (ball_pos_y == left_rocket_pos || ball_pos_y == left_rocket_pos - 1 ||
                        ball_pos_y == left_rocket_pos + 1)) {
                ball_speed_x = -ball_speed_x;
            } else if (ball_pos_x == 75 &&
                       (ball_pos_y == right_rocket_pos || ball_pos_y == right_rocket_pos - 1 ||
                        ball_pos_y == right_rocket_pos + 1)) {
                ball_speed_x = -ball_speed_x;
            }

            if (ball_pos_x == 2) {
                score_right++;
                ball_pos_x = 40;
                ball_pos_y = 13;
            }
            if (ball_pos_x == 78) {
                score_left++;
                ball_pos_x = 40;
                ball_pos_y = 13;
            }
            pong(ball_pos_x, ball_pos_y, left_rocket_pos, right_rocket_pos, ball_speed_x, ball_speed_y,
                 score_left, score_right);
        }
        ball_pos_x += ball_speed_x;
        ball_pos_y += ball_speed_y;
    }
    printf("CONGRAULATIONS!\n");
    return 0;
}