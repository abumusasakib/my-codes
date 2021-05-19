package IfAndSwitch;

import java.util.Scanner;

public class Problem36
{
    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);
        
        char letter;
        System.out.print("Enter a letter: ");
        letter = scan.next().charAt(0);
        
        switch(letter)
        {
            case 'A':
            case 'a':
                System.out.println("A is for Apple");
                break;
            case 'B':
            case 'b':
                System.out.println("B is for Ball");
                break;
            case 'C':
            case 'c':
                System.out.println("C is for Cat");
                break;
            case 'D':
            case 'd':
                System.out.println("D is for Dog");
                break;
            case 'E':
            case 'e':
                System.out.println("E is for Eagle");
                break;
            case 'F':
            case 'f':
                System.out.println("F is for Fox");
                break;
            case 'G':
            case 'g':
                System.out.println("G is for Goose");
                break;
            case 'H':
            case 'h':
                System.out.println("H is for Henry");
                break;
            case 'I':
            case 'i':
                System.out.println("I is for Increase");
                break;
            case 'J':
            case 'j':
                System.out.println("J is for Joker");
                break;
            case 'K':
            case 'k':
                System.out.println("K is for Kite");
                break;
            case 'L':
            case 'l':
                System.out.println("L is for Lion");
                break;
            case 'M':
            case 'm':
                System.out.println("M is for Monkey");
                break;
            case 'N':
            case 'n':
                System.out.println("N is for Nose");
                break;
            case 'O':
            case 'o':
                System.out.println("O is for Orange");
                break;
            case 'P':
            case 'p':
                System.out.println("P is for Pigeon");
                break;
            case 'Q':
            case 'q':
                System.out.println("Q is for Question");
                break;
            case 'R':
            case 'r':
                System.out.println("R is for Radio");
                break;
            case 'S':
            case 's':
                System.out.println("S is for Sail");
                break;
            case 'T':
            case 't':
                System.out.println("T is for Tiger");
                break;
            case 'U':
            case 'u':
                System.out.println("U is for Under");
                break;
            case 'V':
            case 'v':
                System.out.println("V is for Victory");
                break;
            case 'W':
            case 'w':
                System.out.println("W is for Wave");
                break;
            case 'X':
            case 'x':
                System.out.println("X is for Xylophone");
                break;
            case 'Y':
            case 'y':
                System.out.println("Y is for Yes");
                break;
            case 'Z':
            case 'z':
                System.out.println("Z is for Zebra");
                break;
            default:
                break;
        }
    }
}
