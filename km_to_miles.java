package com.company;
import java.util.Scanner;

public class km_to_miles {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        System.out.println("Enter the distance in kilometers:");
        float F = s.nextFloat();
        float miles = F*0.621371f;
        System.out.println("The distance in miles is: ");
        System.out.println(miles);
    }
}
