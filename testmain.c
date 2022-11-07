#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include "ADT/array.h"
#include "ADT/mesinkarakter.h"
#include "ADT/mesinkata.h"
#include "ADT/mesinload.h"
#include "ADT/queue.h"
#include "ADT/stringcomp.h"
#include "GAME/rng.h"
#include "ADT/boolean.h"
#include "../src/console.h"


int main()
{
    printf("Selamat datang\n");
    printf("ENTER COMMAND: ");
    Array game;
    MakeEmpty(&game);
    Queue gamequeue;
    CreateQueue(&gamequeue);
    char *command;
    command = READINPUT();
    char *first = KataPertama(command);
    char *second = KataKedua(command);
    boolean repeat = true;
    while (repeat)
    {
        if (str_comp(command, "START"))
        {
            STARTGAME(&game);
            repeat = false;
        }
        else if (str_comp(first, "LOAD"))
        {
            if (str_comp(second, "savefile.txt"))
            {
                MakeEmpty(&game);
                LOAD(&game , "../data/savefile.txt");
                repeat = false;
            }
            else
            {
                printf("Save file tidak berhasil dibaca. BNMO belum dijalankan\n\n");
                printf("ENTER COMMAND: ");
                command = READINPUT();
                first = KataPertama(command);
                second = KataKedua(command);
            }
        }
        else
        {
            printf("Perintah yang bisa digunakan hanya START DAN LOAD\n\n");
            printf("ENTER COMMAND: ");
            command = READINPUT();
            first = KataPertama(command);
            second = KataKedua(command);
        }
    }
    printf("ENTER COMMAND: ");
    command = READINPUT();
    first = KataPertama(command);
    second = KataKedua(command);
    while (!str_comp(command, "QUIT"))
    {
        if (blank_count(command) > 1)
        {
            printf("ASDADAS");
        }
        else
        {
            if (str_comp(command, "CREATE GAME"))
            {
                CREATEGAME(&game);
            }
            else if (str_comp(first, "LOAD"))
            {
                if (str_comp(second, "savefile.txt"))
                {
                    MakeEmpty(&game);
                    LOAD(&game , "../data/savefile.txt");
                }
                else
                {
                    printf("Save file tidak berhasil dibaca. BNMO belum dijalankan\n\n");
                }
            }
            else if (str_comp(command, "SAVE"))
            {
                SAVE(game , "../data/savefile.txt");
            }
            else if (str_comp(command, "LIST GAME"))
            {
                LISTGAME(&game);
            }
            else if (str_comp(command, "DELETE GAME"))
            {
                DELETEGAME(&game);
            }
            else if (str_comp(command, "QUEUE GAME"))
            {

                QUEUEGAME(&gamequeue, game);
            }
            else if (str_comp(command, "PLAY GAME"))
            {
                PLAYGAME(&gamequeue, game);
            }
            else if (str_comp(first, "SKIPGAME"))
            {
                // SKIPGAME(&gamequeue, strtointinput(second, str_len(second)));
            }
            else if (str_comp(command, "HELP"))
            {
                HELP();
            }
            else
            {
                printf("ASDASDASD");
            }
        }
        printf("ENTER COMMAND: ");
        command = READINPUT();
        first = KataPertama(command);
        second = KataKedua(command);
    }
    printf("Anda keluar dari game BNMO.\n");
    printf("Bye bye ...\n");
    return 0;
}