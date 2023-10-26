cmake_minimum_required(VERSION 3.26)
project(projet_1_info_snoopy_baby_team C)

set(CMAKE_C_STANDARD 11)

add_executable(projet_1_info_snoopy_baby_team
        main.c
        menu.c
        "mouvements snoopy.c"
        decor.c
        biblio.c)
