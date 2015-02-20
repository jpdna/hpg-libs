/* 
 * File:   record.hpp
 * Author: Cristina Yenyxe Gonzalez Garcia <cyenyxe@ebi.ac.uk>
 *
 * Created on 18 February 2015, 11:33
 */

#ifndef OPENCB_VCF_RECORD_HPP
#define	OPENCB_VCF_RECORD_HPP

#include <iostream>

#include <boost/algorithm/string.hpp>
#include <boost/math/special_functions/binomial.hpp>
#include <boost/regex.hpp>

namespace opencb
{
  namespace vcf
  {
    
    bool is_record_subfield_in_header(std::multimap<std::string, MetaEntry>::iterator begin,
                                      std::multimap<std::string, MetaEntry>::iterator end);
    
  }
}
#endif	/* OPENCB_VCF_RECORD_HPP */

