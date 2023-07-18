int dataTypes(string type)
{
    if (type == "Integer" || type == "Float")
    {
        return 4;
    }
    else if (type == "Double" || type == "Long")
    {
        return 8;
    }
    else if (type == "Character")
    {
        return 1;
    }
}