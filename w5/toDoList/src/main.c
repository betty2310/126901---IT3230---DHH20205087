#include <stdio.h>
#include <time.h>
#include <string.h>

#include "toDo.h"
#include "queue.h"

int main()
{
    struct Queue *q = createQueue();
    int ch = 1;
    do
    {
        printf("<------MENU------>\n");
        printf("1. Them 1 viec\n2. Lam xong viec\n3. Xem viec can lam bay gio\n0. exit\n");
        scanf("%d", &ch);
        getchar();
        if (ch == 1)
        {
            printf("\tAdd todo:\n");
            time_t t = time(NULL);
            struct tm tm = *localtime(&t);
            char s[255];
            printf("\tEnter script: ");
            fgets(s, 255, stdin);
            int n = strlen(s);
            s[n - 1] = '\0';
            int time;
            printf("\tEnter time: ");
            scanf("%d", &time);
            ToDo io;
            strcpy(io.script, s);
            io.time = time;
            io.tm = tm;
            enQueue(q, io);
        }
        if (ch == 2)
        {
            printf("\tLam xong viec dau tien trong danh sach!\n");
            deQueue(q);
        }
        if (ch == 3)
        {
            printf("Xem viec can lam bay gio: \n");
            printf("Thoi gian tao\t\tNoi dung\tThoi gian lam\n");
            printf("%d-%02d-%02d %02d:%02d:%02d\t", q->front->key.tm.tm_year + 1900, q->front->key.tm.tm_mon + 1, q->front->key.tm.tm_mday, q->front->key.tm.tm_hour, q->front->key.tm.tm_min, q->front->key.tm.tm_sec);
            printf("%s\t\t%d\n\n", q->front->key.script, q->front->key.time);
        }
        if (ch == 0)
        {
            printf("<----EXIT----->!\n");
        }

    } while (ch);
    return 0;
}