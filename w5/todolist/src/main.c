#include <stdio.h>
#include <time.h>
#include <string.h>

#include "todo.h"
#include "queue.h"

struct Queue *q;

int main()
{
    q = createQueue();
    int ch = 1;
    do
    {
        printf("<------MENU------>\n");
        printf("1. Them 1 viec\n2. Lam xong viec\n3. Xem viec can lam bay gio\n0. exit\n");
        scanf("%d", &ch);
        getchar();
        if (ch == 1)
            addToDoList();
        if (ch == 2)
            removeFirstToDo();
        if (ch == 3)
            seeFirstToDo();
        if (ch == 0)
            printf("<----EXIT----->!\n");
    } while (ch);
    return 0;
}