
#!/bin/bash

#	FILE -> BUILDER
#		Name: 
#			builder.sh
#		Description:
#			Builder, checks requirements and manages builds
#		Author:
#			COD3M4ST3R
#		Date:
#			27.09.2023
#
#	LOG
#		27.09.2023:
#			COD3M4ST3R -> File has been initialized	


PROJECT_NAME="myproject"

RED='\033[0;31m'
GREEN='\033[0;32m'
ORANGE='\033[0;33m'
BLUE='\033[0;34m'
PURPLE='\033[0;35m'
YELLOW='\033[0;33m'
BOLD_RED='\033[1;31m'
BOLD_GREEN='\033[1;32m'
BOLD_ORANGE='\033[1;33m'
BOLD_BLUE='\033[1;34m'
BOLD_PURPLE='\033[1;35m'
BOLD_YELLOW='\033[1;33m'
BOLD_WHITE='\033[1m'
NC='\033[0m'



function display_menu()
{
    current_builds
    echo -e " "
    echo -e "${BOLD_WHITE}---Build Options---${NC}"
    echo -e "${BOLD_WHITE} 1 ${NC}: CMake Default"
    echo -e "${BOLD_WHITE} 2 ${NC}: CMake Ninja"
    echo -e " "
    echo -e "${BOLD_RED}---Delete Options---${NC}"
    echo -e "${BOLD_WHITE} !c ${NC}: Clean Builds (Deletes all the builds for fresh start)"
    echo -e " "
    echo -e " "
}



function display_options()
{
    echo -e " "
    echo -e "${BOLD_WHITE}---Build Type---${NC}"
    echo -e "${BOLD_WHITE} 1 ${NC}: Release"
    echo -e "${BOLD_WHITE} 2 ${NC}: Debug"
    echo -e " "
}



function build_cmake_default()
{
    PROJECT_DIR=$1
    BUILD="build"
    TYPE=""
    if [ -d "$BUILD" ];then
        process_holder 5
        delete_build "$PROJECT_DIR" "$BUILD"
    fi

    clear
    mkdir -p $BUILD
    cd $BUILD

    while true;do
        display_options
        printf 'Your option(Enter'${BOLD_WHITE}' q'${NC}' to quit): '
        read -r option

        case $option in
            1)
                echo -e "- You choose the Type:${BOLD_PURPLE} Release${NC}"
                TYPE="-DCMAKE_BUILD_TYPE=Release"
                break
                ;;
            2)
                echo -e "- You choose the Type:${BOLD_PURPLE} Debug${NC}"
                TYPE="-DCMAKE_BUILD_TYPE=Debug"
                break
                ;;
            q)
                echo -e "- You choose to quit."
                exit
                ;;
            *)
                echo -e "- Invalid option!"
                ;;
        esac
    done

    if cmake .. $TYPE;then
        make
        cd $PROJECT_DIR/$BUILD
        echo -e "-${BOLD_GREEN} You can compile your project at: '$PROJECT_DIR/$BUILD' ${NC}"
    else
        echo -e "-${BOLD_RED} Fatal Error Occured: Can not make with Cmake! ${NC}"
    fi
}



function build_cmake_ninja()
{
    PROJECT_DIR=$1
    BUILD="build.ninja"
    ninja_supported=`cmake --help | grep Ninja`

    if [ -z $ninja_supported ];then
        echo -e "-${BOLD_ORANGE} Ninja is not supported! ${NC}"
        exit
    else
        if [ -d "$BUILD" ];then
            process_holder 5
            delete_build "$PROJECT_DIR" "$BUILD"
        fi        

        mkdir -p $BUILD
        cd $BUILD

        if cmake .. -G Ninja; then
            ninja
            cd $PROJECT_DIR/$BUILD
            echo -e "-${BOLD_GREEN} You can compile your project at: '$PROJECT_DIR/$BUILD' ${NC}"
        else    
            echo -e "-${BOLD_RED} Fatal Error Occured: Can not make with Ninja! ${NC}"
        fi
    fi
}



function delete_build()
{
    PROJECT_DIR=$1
    BUILD=$2

    if [ -d "$PROJECT_DIR/$BUILD" ]; then
        echo -e "- Deleting the current build of '$BUILD'."
        rm -r "$BUILD"/
        echo -e "- $BUILD has been deleted."
    else
        echo -e "- No current build has been detected for '$BUILD'."
    fi  
    sleep 1
    clear
}



function process_holder() 
{
    timeout=$1

    i=$timeout
    while [ $i -gt 0 ]; do
        if [ $i -gt 5 ]; then
            printf "!${BOLD_WHITE} You can terminate this process until ${BOLD_YELLOW}$i${BOLD_WHITE} seconds${NC} \r"
        else
            printf "!${BOLD_WHITE} You can terminate this process until ${BOLD_RED}$i${BOLD_WHITE} seconds${NC} \r"
        fi
        sleep 1
        i=$((i - 1))
    done
    clear
}



function check_requirements() 
{
    COMMAND=""

    if [[ "$OSTYPE" == "linux-gnu"* ]]; then
        echo -e "- ${BOLD_WHITE}Verifying Requirements for OS: ${BOLD_BLUE}Linux${NC}"
        COMMAND="sudo apt install"
    elif [[ "$OSTYPE" == "darwin"* ]]; then
        COMMAND="brew install"
    elif [[ "$OSTYPE" == "cygwin" ]]; then
        echo -e "Cygwin is not supported!"
        exit
    elif [[ "$OSTYPE" == "msys" ]]; then
        echo -e "MSYS is not supported!"
        exit
    elif [[ "$OSTYPE" == "win32" ]]; then
        echo -e "Win32 is not supported!"
        exit
    elif [[ "$OSTYPE" == "freebsd"* ]]; then
        echo -e "FreeBSD is not supported!"
        exit
    else
        # Unknown OS
        echo -e "Unknown OS."
    fi

    requirements="Requirements.txt"
    while IFS= read -r line; do
        if [[ "$line" == "-ignore" ]]; then
            echo -e "- ${BOLD_PURPLE}Ignoring Requirements...${NC}"
            sleep 1
            break
        fi
        echo -e "- ${BOLD_PURPLE}Checking $line${NC}"
        $COMMAND $line
        sleep 1
    done < "$requirements"  
}



function current_builds()
{
    BUILD="build"
    NINJA="build.ninja"
    info_build=""
    info_ninja=""

    if [[ -d  "$BUILD" ]];then
        info_build="${BOLD_GREEN} \xE2\x9C\x94 ${NC}$BUILD (CMake Default)"
    else
        info_build="${BOLD_RED} \u2718 ${NC}$BUILD (CMake Default)"
    fi

    if [[ -d  "$NINJA" ]];then
        info_ninja="${BOLD_GREEN} \xE2\x9C\x94 ${NC}$NINJA (CMake Ninja)"
    else
        info_ninja="${BOLD_RED} \u2718 ${NC}$NINJA (CMake Ninja)"
    fi

    echo -e " "
    echo -e "${BOLD_WHITE}---Current Builds---${NC}"
    echo -e $info_build
    echo -e $info_ninja
}



### MAIN
clear 
PROJECT_DIR=`pwd`

check_requirements

while true;do
    clear
    display_menu
    printf 'Your option(Enter'${BOLD_WHITE}' q'${NC}' to quit): '
    read -r option
    echo -e ""

    case $option in
        1)
            echo -e "- You choose the CMake Default."
            build_cmake_default "$PROJECT_DIR"
            exit
            ;;
        2)
            echo -e "- You choose the CMake Ninja."
            build_cmake_ninja "$PROJECT_DIR"
            exit
            ;;
        !c)
            echo -e "- You choose to delete builds."
            process_holder 15;
            delete_build "$PROJECT_DIR" "build"
            delete_build "$PROJECT_DIR" "build.ninja"
            ;;
        q)
            echo -e "- You choose to quit."
            clear
            exit
            ;;
        *)
            echo -e "- Invalid option!"
            ;;
    esac
done



