/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkurnava <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 15:33:42 by rkurnava          #+#    #+#             */
/*   Updated: 2023/10/05 13:40:43 by rkurnava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

std::string replaceOccurence(std::string find, std::string replace, std::string buffer)
{
    int len;
    int buffer_len;
    std::string part;
    std::string collector1;
    std::string collector2;
    
    len = find.length();
    if (len == 0)
        return (buffer);
    buffer_len = (int)buffer.length();
    for (int i = 0; i < buffer_len; i++)
    {
        part = buffer.substr(i, len);
        if (part == find)
        {
            collector2 += replace;
            i += len - 1;
        }
        else
        collector2 += buffer[i];
    }
    return (collector2);
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
            outFilfe << replaceOccurence(std::string(argv[2]), std::string(argv[3]), buffer) << std::endl;
        readFile.close();
        outFilfe.close();
        return (0);
    }
    std::cerr << "Error occured while opening the inputfile!" << std::endl;
    return (1);
}