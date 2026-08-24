classdef bh_ddr_arena_CLS
%==========================================================================
% EXAMPLE USAGE:    
% 
%         % define some test waypoint (x,y) data
%         W   = [  0, 0;
%                  1, 0;
%                  1, 0.5;
%                  0, 0.5;
%                  0, 1;
%                  1, 1;
%                ];
% 
%         % create an instance of the ARENA class.
%         OBJ = bh_ddr_arena_CLS( W(:,1), W(:,2) )  ;
% 
%         % plot the arena
%         OBJ.plot_arena()
% 
%         % get axes handle and path height for drawing vehicles
%         hax = OBJ.get_ax()
%         z   = OBJ.get_path_height()    
%==========================================================================    
    properties
        marker_X_col  = [];
        marker_Y_col  = [];
        marker_Z_col  = [];
        marker_radius = 10;
        path_matrix = [];
        N             = 0;
        TAG_AX        = 'TAG_AX_DDR_ARENA';
        path_linspec  = '--r';
        marker_color        = [0 0 1];   % outer circle colour (blue)
        marker_center_color = [1 0 0];   % center dot colour   (red)
        marker_center_ratio = 0.3;       % dot radius as a fraction of R
    end
    
    properties
       hax 
    end
%==========================================================================
methods
function OBJ = bh_ddr_arena_CLS(xC, yC, matrix)
% Usage:
%   OBJ = bh_ddr_arena_CLS(xC, yC, zC)
%   OBJ = bh_ddr_arena_CLS(xC, yC)

close all;
    
if(3==nargin)
    zC = zeros(size(xC));
end

OBJ.marker_X_col = xC(:);
OBJ.marker_Y_col = yC(:);
OBJ.marker_Z_col = zC(:);
OBJ.N            = length(xC);
OBJ.marker_radius = LOC_calc_markersize(OBJ);
OBJ.marker_radius = 2;
OBJ.path_matrix = matrix(1:end-1, :);

end % bh_ddr_arena_CLS
%--------------------------------------------------------------------------
function plot_arena(OBJ, hax)
    if(1==nargin)
        hax = axes;
    end
    
    
    % set the Tag - very important. Used for finding the axes
    set(hax, 'Tag',OBJ.TAG_AX)
    axis(hax, 'equal')   
    hold(hax,'on') % important 
    
    for kk=1:OBJ.N
        xc = OBJ.marker_X_col(kk);
        yc = OBJ.marker_Y_col(kk);
        zc = OBJ.marker_Z_col(kk);
        R  = OBJ.marker_radius;
        LOC_plot_circle_marker(hax, xc, yc, zc, R, ...
                                OBJ.marker_color, ...
                                OBJ.marker_center_color, ...
                                OBJ.marker_center_ratio);
    end
    
    xmin = min(OBJ.marker_X_col) - 3*OBJ.marker_radius;
    xmax = max(OBJ.marker_X_col) + 3*OBJ.marker_radius;
    ymin = min(OBJ.marker_Y_col) - 3*OBJ.marker_radius;
    ymax = max(OBJ.marker_Y_col) + 3*OBJ.marker_radius;
    zmin = min(OBJ.marker_Z_col) - 3*OBJ.marker_radius;
    zmax = max(OBJ.marker_Z_col) + 3*OBJ.marker_radius;
    
    xlim(hax,[-110,110]);
    ylim(hax,[-110,110]);
    zlim(hax,[zmin,zmax]);
    
    hL(1) = light('Position',[xmin, ymin, zmax]);   
    hL(2) = light('Position',[xmax, ymin, zmax]); 
    hL(3) = light('Position',[xmax, ymax, zmax]);
    hL(4) = light('Position',[xmin, ymax, zmax]); 

    set(hL,'Style','local')
      
    % 
    % now draw path from path_matrix as a dotted line
% now draw path (from path_matrix, if provided) as individual points
    if(~isempty(OBJ.path_matrix))
        zPath = OBJ.get_path_height() * ones(size(OBJ.path_matrix,1),1);
 
        plot3(hax, OBJ.path_matrix(:,1), ...
                   OBJ.path_matrix(:,2), ...
                   zPath, ...
                   OBJ.path_linspec, 'LineStyle','none', ...
                   'Marker','.', 'MarkerSize',12, ...
                   'DisplayName','Optimised Path');
    end
   % put on some annotations
   grid(hax,'on');
   xlabel('X (m)', 'FontSize',14,'FontWeight','Bold');
   ylabel('Y (m)', 'FontSize',14,'FontWeight','Bold');
   legend('Waypoint Threshold', 'Waypoints')
       % now draw path
   plot3(hax, OBJ.marker_X_col, ...
               OBJ.marker_Y_col, ...
               OBJ.marker_Z_col, ...
               OBJ.path_linspec,  'LineWidth',1.5, 'Color', 'black', 'DisplayName', 'Path');
    
end % plot_markers
%--------------------------------------------------------------------------
function hax = get_ax(OBJ)
    hax = [];
    h   = findobj('Type','Axes','Tag',OBJ.TAG_AX);
    
    assert(length(h)<=1, 'ERR: only 1 DDR ARENA axes is allowed');
    
    if(~isempty(h))
       hax = h;
    end
end
%--------------------------------------------------------------------------
function z = get_path_height(OBJ)
         z = max(OBJ.marker_Z_col) + 1*OBJ.marker_radius;
end
%--------------------------------------------------------------------------

end % methods
%==========================================================================

end % classdef
%==========================================================================
% function hs = LOC_plot_sphere(hax,xc,yc,zc,R)
% [x,y,z] = sphere(hax,20);
% 
% % scale
% x = x*R;
% y = y*R;
% z = z*R;
% % position center
% x = x + xc;
% y = y + yc;
% z = z + zc;
% 
% 
% hs = surf(hax,x,y,z);
% set(hs,'FaceLighting','gouraud',...
%        'FaceColor',[1 0 0], ...
%        'EdgeColor','none');
% end
%==========================================================================
function R = LOC_calc_markersize(OBJ)

    xdiff = diff(OBJ.marker_X_col);
    ydiff = diff(OBJ.marker_Y_col);

    m = max([xdiff(:); ydiff(:)]);
    
    R = m/50;
    
end
%==========================================================================
function [hOuter, hInner] = LOC_plot_circle_marker(hax, xc, yc, zc, R, ...
                                                     outerColor, innerColor, innerRatio)
% Draws a filled circle of radius R centered at (xc,yc,zc), with a
% smaller, differently-coloured filled dot on top of its center.
%
% outerColor / innerColor : RGB triplets (or colour strings)
% innerRatio              : radius of the center dot as a fraction of R
 
if(nargin < 6), outerColor = [0 0 1]; end   % default blue
if(nargin < 7), innerColor = [1 1 0]; end   % default yellow
if(nargin < 8), innerRatio = 0.3;     end
 
theta = linspace(0, 2*pi, 50);
 
% ---- outer circle ----
xOuter = xc + R*cos(theta);
yOuter = yc + R*sin(theta);
zOuter = zc*ones(size(theta));
 
hOuter = patch(hax, xOuter, yOuter, zOuter, 'w', ...
               'FaceColor','none', ...
               'EdgeColor',outerColor, 'LineWidth',1.5);
 
% ---- smaller center dot, drawn slightly above so it's always visible ----
rDot = 0.5;
xDot = xc + rDot*cos(theta);
yDot = yc + rDot*sin(theta);
zDot = (zc + 0.01*max(R,eps))*ones(size(theta));
 
hInner = patch(hax, xDot, yDot, zDot, innerColor, ...
               'EdgeColor','none');
 
end