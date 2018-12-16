type t;

type radian = float;

[@bs.deriving abstract]
type fieldOfView = {
  upDegrees: float,
  downDegrees: float,
  leftDegrees: float,
  rightDegrees: float,
};

[@bs.module "gl-matrix"] [@bs.scope "mat4"] external create: unit => t = "";
[@bs.module "gl-matrix"] [@bs.scope "mat4"] external clone: t => t = "";
[@bs.module "gl-matrix"] [@bs.scope "mat4"]
external copy: (~out: t, ~in_: t) => t = "";
[@bs.module "gl-matrix"] [@bs.scope "mat4"]
external fromValues:
  (
    float,
    float,
    float,
    float,
    float,
    float,
    float,
    float,
    float,
    float,
    float,
    float,
    float,
    float,
    float,
    float
  ) =>
  t =
  "";
[@bs.module "gl-matrix"] [@bs.scope "mat4"]
external set:
  (
    t,
    float,
    float,
    float,
    float,
    float,
    float,
    float,
    float,
    float,
    float,
    float,
    float,
    float,
    float,
    float,
    float
  ) =>
  t =
  "";
[@bs.module "gl-matrix"] [@bs.scope "mat4"] external identity: t => t = "";
[@bs.module "gl-matrix"] [@bs.scope "mat4"]
external transpose: (~out: t, ~in_: t) => t = "";
[@bs.module "gl-matrix"] [@bs.scope "mat4"]
external invert: (~out: t, ~in_: t) => t = "";
[@bs.module "gl-matrix"] [@bs.scope "mat4"]
external adjoint: (~out: t, ~in_: t) => t = "";
[@bs.module "gl-matrix"] [@bs.scope "mat4"]
external determinant: t => float = "";
[@bs.module "gl-matrix"] [@bs.scope "mat4"]
external multiply: (~out: t, t, t) => t = "";
[@bs.module "gl-matrix"] [@bs.scope "mat4"]
external translate: (~out: t, ~in_: t, ~translate: Vec3.t) => t = "";
[@bs.module "gl-matrix"] [@bs.scope "mat4"]
external scale: (~out: t, ~in_: t, ~scale: Vec3.t) => t = "";
[@bs.module "gl-matrix"] [@bs.scope "mat4"]
external rotate: (~out: t, ~in_: t, ~angle: radian, ~axis: Vec3.t) => t = "";
[@bs.module "gl-matrix"] [@bs.scope "mat4"]
external rotateX: (~out: t, ~in_: t, ~angle: radian) => t = "";
[@bs.module "gl-matrix"] [@bs.scope "mat4"]
external rotateY: (~out: t, ~in_: t, ~angle: radian) => t = "";
[@bs.module "gl-matrix"] [@bs.scope "mat4"]
external rotateZ: (~out: t, ~in_: t, ~angle: radian) => t = "";
[@bs.module "gl-matrix"] [@bs.scope "mat4"]
external fromTranslation: (~out: t, ~translation: Vec3.t) => t = "";
[@bs.module "gl-matrix"] [@bs.scope "mat4"]
external fromScaling: (~out: t, ~scale: Vec3.t) => t = "";
[@bs.module "gl-matrix"] [@bs.scope "mat4"]
external fromRotation: (~out: t, ~angle: radian, ~axis: Vec3.t) => t = "";
[@bs.module "gl-matrix"] [@bs.scope "mat4"]
external fromXRotation: (~out: t, ~angle: radian) => t = "";
[@bs.module "gl-matrix"] [@bs.scope "mat4"]
external fromYRotation: (~out: t, ~angle: radian) => t = "";
[@bs.module "gl-matrix"] [@bs.scope "mat4"]
external fromZRotation: (~out: t, ~angle: radian) => t = "";
[@bs.module "gl-matrix"] [@bs.scope "mat4"]
external fromRotationTranslation:
  (~out: t, ~rotation: Quat.t, ~translation: Vec3.t) => t =
  "";
external fromQuat2: (~out: t, ~in_: Quat2.t) => t = "";
[@bs.module "gl-matrix"] [@bs.scope "mat4"]
external getTranslation: (~out: Vec3.t, ~in_: t) => Vec3.t = "";
[@bs.module "gl-matrix"] [@bs.scope "mat4"]
external getScaling: (~out: Vec3.t, ~in_: t) => Vec3.t = "";
[@bs.module "gl-matrix"] [@bs.scope "mat4"]
external getRotation: (~out: Quat.t, ~in_: t) => Quat.t = "";
[@bs.module "gl-matrix"] [@bs.scope "mat4"]
external fromRotationTranslationScale:
  (~out: t, ~rotation: Quat.t, ~translation: Vec3.t, ~scale: Vec3.t) => Quat.t =
  "";
[@bs.module "gl-matrix"] [@bs.scope "mat4"]
external fromRotationTranslationScaleOrigin:
  (
    ~out: t,
    ~rotation: Quat.t,
    ~translation: Vec3.t,
    ~scale: Vec3.t,
    ~origin: Vec3.t
  ) =>
  Quat.t =
  "";
[@bs.module "gl-matrix"] [@bs.scope "mat4"]
external fromQuat: (~out: t, ~in_: Quat.t) => t = "";
[@bs.module "gl-matrix"] [@bs.scope "mat4"]
external frustum:
  (
    ~out: t,
    ~left: float,
    ~right: float,
    ~bottom: float,
    ~top: float,
    ~near: float,
    ~far: float
  ) =>
  t =
  "";
[@bs.module "gl-matrix"] [@bs.scope "mat4"]
external perspective:
  (~out: t, ~fovy: float, ~aspect: float, ~near: float, ~far: float) => t =
  "";
[@bs.module "gl-matrix"] [@bs.scope "mat4"]
external perspectiveFromFieldOfView:
  (~out: t, ~fov: fieldOfView, ~near: float, ~far: float) => t =
  "";
[@bs.module "gl-matrix"] [@bs.scope "mat4"]
external ortho:
  (
    ~out: t,
    ~left: float,
    ~right: float,
    ~bottom: float,
    ~top: float,
    ~near: float,
    ~far: float
  ) =>
  t =
  "";
[@bs.module "gl-matrix"] [@bs.scope "mat4"]
external lookAt: (~out: t, ~eye: Vec3.t, ~center: Vec3.t, ~up: Vec3.t) => t =
  "";
[@bs.module "gl-matrix"] [@bs.scope "mat4"]
external targetTo: (~out: t, ~eye: Vec3.t, ~center: Vec3.t, ~up: Vec3.t) => t =
  "";
[@bs.module "gl-matrix"] [@bs.scope "mat4"] external str: t => string = "";
[@bs.module "gl-matrix"] [@bs.scope "mat4"] external frob: t => float = "";
[@bs.module "gl-matrix"] [@bs.scope "mat4"]
external add: (~out: t, t, t) => t = "";
[@bs.module "gl-matrix"] [@bs.scope "mat4"]
external subtract: (~out: t, t, t) => t = "";
[@bs.module "gl-matrix"] [@bs.scope "mat4"]
external multiplyScalar: (~out: t, ~in_: t, ~scale: float) => t = "";
[@bs.module "gl-matrix"] [@bs.scope "mat4"]
external multiplyScalarAndAdd: (~out: t, t, t, ~scale: float) => t = "";
[@bs.module "gl-matrix"] [@bs.scope "mat4"]
external exactEquals: (t, t) => bool = "";
[@bs.module "gl-matrix"] [@bs.scope "mat4"]
external equals: (t, t) => bool = "";