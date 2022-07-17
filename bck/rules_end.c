void rule_2_2_end(char ***board, int i, int j, int *posdir)
{
        char *cell;
        char *cell_3rd;
        char *cell_4th;

        calc_posdir(i, j, posdir);
        cell_3rd = get_cell(board, posdir, 2);
        cell_4th = get_cell(board, posdir, 3);
        if (!(cell_3rd[3] && cell_4th[2]))
                return ;
        cell = get_cell(board, posdir, 0);
        rm_from_cell(cell, "134");
        cell = get_cell(board, posdir, 1);
        rm_from_cell(cell, "234");
}

void rule_3_2_end(char ***board, int i, int j, int *posdir)
{
        char *cell;
        char *cell_3rd;
        char *cell_4th;

        calc_posdir(i, j, posdir);
        cell_3rd = get_cell(board, posdir, 2);
        cell_4th = get_cell(board, posdir, 3);
        if (!(cell_3rd[3] && cell_4th[2]))
                return ;
        cell = get_cell(board, posdir, 0);
        rm_from_cell(cell, "234");
        cell = get_cell(board, posdir, 1);
        rm_from_cell(cell, "134");
}
