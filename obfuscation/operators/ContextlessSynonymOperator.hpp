/*
 * Copyright 2017-2019 Janek Bevendorff, Webis Group
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef OBFUSCATION_SEARCH_CONTEXTLESSSYNONYMOPERATOR_HPP
#define OBFUSCATION_SEARCH_CONTEXTLESSSYNONYMOPERATOR_HPP

#include "NetspeakOperator.hpp"
#include <unordered_map>

class ContextlessSynonymOperator: public NetspeakOperator {
public:
    ContextlessSynonymOperator(std::string const& name, double cost, std::string const& description);
    std::unique_ptr<Operator> clone() const override;

protected:
    std::unordered_set<State> applyImpl(FocusPoint const& focusPoint, State const& state, Context& context) const override;
    std::shared_ptr<Dictionary const> m_dict;
};

#endif //OBFUSCATION_SEARCH_CONTEXTLESSSYNONYMOPERATOR_HPP
