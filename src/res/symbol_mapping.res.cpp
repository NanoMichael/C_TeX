#include "core/formula.h"

map<int, string> TeXFormula::_symbolMappings = {
    {'+', "plus"},
    {'*', "ast"},
    {'(', "lbrack"},
    {';', "semicolon"},
    {'{', "lbrace"},
    {'!', "faculty"},
    {')', "rbrack"},
    {',', "comma"},
    {'?', "question"},
    {']', "rsqbrack"},
    {'|', "vert"},
    {':', "colon"},
    {'=', "equals"},
    {'[', "lsqbrack"},
    {'}', "rbrace"},
    {'`', "mathlapos"},
    {'#', "mathsharp"},
    {'-', "minus"},
    {'/', "slash"},
    {'.', "normaldot"},
    {'>', "gt"},
    {'<', "lt"},
    {'\'', "textapos"},
    {163, "mathsterling"},
    {165, "yen"},
    {167, "S"},
    {171, "guillemotleft"},
    {174, "textregistered"},
    {181, "textmu"},
    {182, "P"},
    {187, "guillemotright"},
    {191, "questiondown"},
    {981, "phi"},
    {982, "varpi"},
    {1008, "varkappa"},
    {1009, "varrho"},
    {945, "alpha"},
    {946, "beta"},
    {947, "gamma"},
    {948, "delta"},
    {949, "varepsilon"},
    {950, "zeta"},
    {951, "eta"},
    {952, "theta"},
    {953, "iota"},
    {954, "kappa"},
    {955, "lambda"},
    {956, "mu"},
    {957, "nu"},
    {958, "xi"},
    {959, "omicron"},
    {960, "pi"},
    {961, "rho"},
    {962, "varsigma"},
    {963, "sigma"},
    {964, "tau"},
    {965, "upsilon"},
    {966, "varphi"},
    {967, "chi"},
    {968, "psi"},
    {969, "omega"},
    {977, "vartheta"},
    {65288, "lbrack"},
    {65289, "rbrack"},
    {65292, "comma"}};

map<int, string> TeXFormula::_symbolTextMappings = {
    {'-', "textminus"},
    {'/', "textfractionsolidus"},
    {'.', "textnormaldot"},
    {913, "Α"},
    {914, "Β"},
    {915, "Γ"},
    {916, "Δ"},
    {917, "Ε"},
    {918, "Ζ"},
    {919, "Η"},
    {920, "Θ"},
    {921, "Ι"},
    {922, "Κ"},
    {923, "Λ"},
    {924, "Μ"},
    {925, "Ν"},
    {926, "Ξ"},
    {927, "Ο"},
    {928, "Π"},
    {929, "Ρ"},
    {931, "Σ"},
    {932, "Τ"},
    {933, "Υ"},
    {934, "Φ"},
    {935, "Χ"},
    {936, "Ψ"},
    {937, "Ω"},
    {945, "α"},
    {946, "β"},
    {947, "γ"},
    {948, "δ"},
    {949, "ε"},
    {950, "ζ"},
    {951, "η"},
    {952, "θ"},
    {953, "ι"},
    {954, "κ"},
    {955, "λ"},
    {956, "μ"},
    {957, "ν"},
    {958, "ξ"},
    {959, "ο"},
    {960, "π"},
    {961, "ρ"},
    {962, "ς"},
    {963, "σ"},
    {964, "τ"},
    {965, "υ"},
    {966, "φ"},
    {967, "χ"},
    {968, "ψ"},
    {969, "ω"},
    {977, "ϑ"},
    {65288, "lbrack"},
    {65289, "rbrack"},
    {65292, "comma"}};
