<h1> This is a simple maze game.</h1> 


	' ' is empty place, you can go there.
	'#' is wall.
	'S' is starting point.
	'E' is ending point.
	'P' shows where you are.

&nbsp;&nbsp;you can go up, left, down, right with <b>WASD</b>.

This maze program opens 'Maze.txt' files on same folder.
Maze.txt is consisted of:

	SizeofMaze.x SizeofMaze.y VisionDistance
	Maze
	
Maze have to include 'S', Starting point and 'E', ending point.<br>
example)

	5 5 2
	#####
	#   #
	# # #
	#E#S#
	#####



<br><br><br>
<h1>Test Map Data</h1>



	15 15 5
        ###############
	#E  #         #
	### # ####### #
	# # # ####### #
	# # # ##      #
	# # # ## # ## #
	# # # ## # ## #
	# # #    # ## #
	# # ### ## ## #
	# # ### ## ## #
	# # ### ##  # #
	# #  ###### # #
	# ## ###### # #
	#           #S#
	###############
#

 	30 30 5
	##############################
	#E                           #
	############################ #
	# #           #   #    #     #
	# # ######### # #   #     #  #
	# #           # ##############
	# ########### #              #
	# #         # ############## #
	# #  ###### # #            # #
	# #  ##   # # # ########## # #
	# #   # # # # # #   #   ## # #
	# # # # # # # # # #   #    # #
	# # # # # # # # # ########## #
	# # #       # # #            #
	# # ######### # ##############
	# #           #     #        #
	# # ######### ##### # ###### #
	# # # #     # #     # #    # #
	# # # # ### # # ### # # ## # #
	# # # # ##### # #   # #### # #
	# # # #       # #####    # # #
	# # #   #######    ##### # # #
	# # # #   ########     # # # #
	# # # #####   #   #   ## # # #
	# # #       #   #   #  # # # #
	# # #################### # # #
	# #                        # #
	# ########################## #
	#                           S#
	##############################


#

	50 50 5
	##################################################
	#E#   #   #   #      #                         #S#
	# # #   #   # ## ### # ####################### # #
	# # ######### #  # # # #   #   #        #    # # #
	# #       # # ## # # # # # ## ## #### # # ## # # #
	# ##### ### # #  # # # # # #  #     # # # #  # # #
	# #     #   # ## #   # # # # ## ##### ### # ## # #
	# # ##### # # #  ##### # # #  # # #       # #  # #
	# # #   # ### ##       # # ## # # # ##### # ## # #
	# # # # #      #  ###### #    # # # #   # #    # #
	# # # # ######### #    # ###### # # # # # ###### #
	#               # # ##            # # #          #
	############### # ################# # ########## #
	#             # #                   # #        # #
	# ########### # ##################### # # ###### #
	# #         # # #                   # # #        #
	# # ####### # # ######## ######## # # # ##########
	# # #     # # # #      # #      # # # # # #      #
	# # # ### # # # # #### # # ###### # # # # # #### #
	# # # #     # # # #    # # #    # # # # # # ##   #
	# # # ####### # # #### # # #  # # # # #   #  # ###
	# # #         # # #    # # #### # # # ###### #   #
	# # ########### # #### # #      # # # #      ### #
	# # #           # #    # # ###### # # # #### #   #
	# # # ########### #### # # #    # # # #      # ###
	# # #              #   # # # #### ### ###### #   #
	# ### ############## ### # #                 ### #
	# #   #            # # # # ###################   #
	# ##### ########## # # # #                   ### #
	# #   # #  #     # # # # ############ ###### # # #
	# # # # # ## ### # # # #            # #    # # # #
	# # # # # ## ### # # # # ########## # # # ## # # #
	# # # # #      # # # # # #        # # # # ## # # #
	# # # # ###### # # # # # # # #### # # # #    # # #
	# # # #      # # # # # # # # #  # # # # #### # # #
	# # # ###### ### # # # # # # ## # # # # #  # # # #
	# # #            # # # # # # #  # # # # # ## # # #
	# # # ###### ### # # # # # # # ## # # # #  # # # #
	# # # #    # # # # # # # # # #  # # # # ## # # # #
	# # # # ## # # # # # # # # # ## # # # # #  # # # #
	# # # # #  # # # # # # # # # #  # # # # # ## # # #
	# # # # # ## # # # # # # # # ## # # # # #  # # # #
	# # # # #  # # # # # # # # # #    # # # ## # # # #
	# # # # #### # # # # # # # # ###### # #    # # # #
	# # # #      #   #     # # #        # # #### # # #
	# # # ################## # ########## #    # # # #
	# # #                    #            ######   # #
	# ############################################## #
	#                                                #
	##################################################
