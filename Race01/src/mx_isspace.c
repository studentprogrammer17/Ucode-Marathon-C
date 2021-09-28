#include "minilibmx.h"
bool mx_isspace(char c) {
    if((c >= '\t' && c <= '\r') || c == ' ') return true;
    return false;
}
