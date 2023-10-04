/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkurnava <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 15:33:42 by rkurnava          #+#    #+#             */
/*   Updated: 2023/10/04 16:48:37 by rkurnava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

void replaceOccurence(std::string find, std::string replace, std::string buffer)
{
    std::string collector;
    
}

int main(int argc, char **argv)
{
    if (argc != 4)
    {
        std::cout << "Incorrect amount of arguments" << std::endl;
        return (0);
    }
    std::ifstream   readFile(argv[1]);
    if (readFile.is_open())
    {
        std::ofstream outFilfe("output.txt");
        if (!outFilfe.is_open())
        {
            std::cerr << "Error occured while creating/opening the outputfile!" << std::endl;
            readFile.close();
            return (1);
        }
        std::string buffer;
        while(getline(readFile, buffer))
        {
            replaceOccurence(std::string (argv[2]),std::string (argv[3]), buffer);
            outFilfe << buffer << std::endl;
        }
        readFile.close();
        outFilfe.close();
        return (0);
    }
    std::cerr << "Error occured while opening the inputfile!" << std::endl;
    return (1);
}