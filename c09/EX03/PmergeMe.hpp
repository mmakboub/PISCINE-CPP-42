/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 18:42:46 by mmakboub          #+#    #+#             */
/*   Updated: 2023/05/29 20:24:39 by mmakboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP
#include<deque>
#include<vector>

class PmergeMe{ 
    public:
        PmergeMe();
        PmergeMe(const PmergeMe& other);
        PmergeMe& operator=(const PmergeMe& rhs);
        ~PmergeMe();
        void mergeQ(std::deque<int>&sub1, std::deque<int>&sub2, std::deque<int>&deque);
        void mergsortQ(std::deque<int>&deque, int ac);
        void mergeV(std::vector<int>&sub1, std::vector<int>&sub2, std::vector<int>&vector);
        void mergsortV(std::vector<int>&vect, int ac);
        void insert_sortV(int ac, std::vector<int>&vec);
        void insert_sortQ(int ac, std::deque<int>&deque);
};
#endif