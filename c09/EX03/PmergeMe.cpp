/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 18:43:05 by mmakboub          #+#    #+#             */
/*   Updated: 2023/05/29 20:38:13 by mmakboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"PmergeMe.hpp"

PmergeMe::PmergeMe()
{
}
PmergeMe::PmergeMe(const PmergeMe& other){ *this = other; };
PmergeMe &PmergeMe::operator=(const PmergeMe& rhs){
    (void)rhs;
    return *this;}
          
PmergeMe::~PmergeMe()
{
}
void PmergeMe::mergeQ(std::deque<int>&sub1, std::deque<int>&sub2, std::deque<int> &deq)
{
    int len = deq.size();
    int Lsub1 = len / 2;
    int Lsub2 = len - Lsub1;
    int iofsub1(0) , iofsub2(0) , iofmq(0);
    while(iofsub1 < Lsub1 && iofsub2 < Lsub2)
    {
        if(sub1[iofsub1] <= sub2[iofsub2])
        {
            deq[iofmq] = sub1[iofsub1];
            iofsub1++;
        }
        else{
            deq[iofmq] = sub2[iofsub2];
            iofsub2++;
        }
        iofmq++;
    }
    while(iofsub1 < Lsub1)
    {
        deq[iofmq] = sub1[iofsub1];
        iofsub1++;
        iofmq++;
    }
    while(iofsub2 < Lsub2)
    {
        deq[iofmq] = sub2[iofsub2];
        iofsub2++;
        iofmq++;
    }
}

void PmergeMe::mergsortQ(std::deque<int>&deq, int ac){
    int len = deq.size();
	if (len <= 1) return;
    if(len  <= 13)
    {
        insert_sortQ(ac, deq);
        return ;
    }
    std::deque<int>sub1(len / 2);
    std::deque<int>sub2(len - (len / 2));

    int i, j;
    i = 0;
    j = 0;

    for(; i < len; i++){
        if(i < (len / 2))
            sub1[i] = deq[i];
        else
        {
            sub2[j] = deq[j];
            j++;
        }
        
    }
    mergsortQ(sub1, ac);
    mergsortQ(sub2, ac);
    mergeQ(sub1, sub2, deq);
}
void PmergeMe::mergeV(std::vector<int>&sub1, std::vector<int>&sub2, std::vector<int> &vect)
{
    int len = vect.size();
    int Lsub1 = len / 2;
    int Lsub2 = len - Lsub1;
    int iofsub1(0) , iofsub2(0) , iofmq(0);
    while(iofsub1 < Lsub1 && iofsub2 < Lsub2)
    {
        if(sub1[iofsub1] <= sub2[iofsub2])
        {
            vect[iofmq] = sub1[iofsub1];
            iofsub1++;
        }
        else{
            vect[iofmq] = sub2[iofsub2];
            iofsub2++;
        }
        iofmq++;
    }
    while(iofsub1 < Lsub1)
    {
        vect[iofmq] = sub1[iofsub1];
        iofsub1++;
        iofmq++;
    }
    while(iofsub2 < Lsub2)
    {
        vect[iofmq] = sub2[iofsub2];
        iofsub2++;
        iofmq++;
    }
}

void PmergeMe::mergsortV(std::vector<int>&vect, int ac){
    int len = vect.size();
	if (len <= 1) return;
    if(len  <= 13)
    {
        insert_sortV(ac, vect);
        return;
    }
    std::vector<int>sub1(len / 2);
    std::vector<int>sub2(len - (len / 2));

    int i, j;
    i = 0;
    j = 0;

    for(; i < len; i++){
        if(i < (len / 2))
            sub1[i] = vect[i];
        else
        {
            sub2[j] = vect[i];
            j++;
        }
        
    }
    mergsortV(sub1, ac);
    mergsortV(sub2, ac);
    mergeV(sub1, sub2, vect);
}
void PmergeMe::insert_sortV(int ac, std::vector<int>&vec)
{
 
    int i(1), j, k;
    for(; i < ac -1 ; i++)
    {
        k = vec[i];
        j = i - 1;
        while(j>=0 && vec[j] > k)
        {
            vec[j + 1] = vec[j];
            j = j -1;
        }
        vec[j+ 1] = k;
    }
}

void PmergeMe::insert_sortQ(int ac, std::deque<int>&deque)
{

    int i(1), j, k;
    for(; i < ac -1; i++)
    {
        k = deque[i];
        j = i - 1;
        while(j>=0 && deque[j] > k)
        {
            deque[j + 1] = deque[j];
            j--;
        }
        deque[j+ 1] = k;
    }
}