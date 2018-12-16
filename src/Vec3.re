type t;

[@bs.module "gl-matrix"] [@bs.scope "vec3"] external create: unit => t = "";
[@bs.module "gl-matrix"] [@bs.scope "vec3"] external clone: t => t = "";
[@bs.module "gl-matrix"] [@bs.scope "vec3"] external length: t => int = "";
[@bs.module "gl-matrix"] [@bs.scope "vec3"]
external fromValues: (float, float, float) => t = "";
[@bs.module "gl-matrix"] [@bs.scope "vec3"]
external copy: (~out: t, ~in_: t) => t = "";
[@bs.module "gl-matrix"] [@bs.scope "vec3"]
external set: (~out: t, float, float, float) => t = "";