#!/usr/bin/env python

import PyDealII.Release as dealii

triangulation = dealii.Triangulation("2D")

triangulation.generate_hyper_shell(
    center=dealii.Point([0, 0]),
    inner_radius=0.5,
    outer_radius=1.0,
    n_cells=0,
    colorize=True,
)

triangulation.refine_global(2)

for cell in triangulation.active_cells():
    cell.material_id = 1 if cell.center().x > 0 else 2

    for face in cell.faces():
        if face.at_boundary() and face.boundary_id == 1:
            cell.refine_flag = "isotropic"

triangulation.execute_coarsening_and_refinement()
# dealii.write(triangulation, "save.svg")
