#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#include "queue.h"
#include "todo.h"

void addToDoList()
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

void removeFirstToDo()
{
    printf("\tLam xong viec dau tien trong danh sach!\n");
    deQueue(q);
}

void seeFirstToDo()
{
    printf("Xem viec can lam bay gio: \n");
    printf("Thoi gian tao\t\tNoi dung\tThoi gian lam\n");
    printf("%d-%02d-%02d %02d:%02d:%02d\t", q->front->key.tm.tm_year + 1900, q->front->key.tm.tm_mon + 1, q->front->key.tm.tm_mday, q->front->key.tm.tm_hour, q->front->key.tm.tm_min, q->front->key.tm.tm_sec);
    printf("%s\t\t%d\n\n", q->front->key.script, q->front->key.time);
}
