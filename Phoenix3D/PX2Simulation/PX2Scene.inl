// PX2Scene.inl

//----------------------------------------------------------------------------
inline CameraActor *Scene::GetUseCameraActor()
{
	return mCameraActor;
}
//----------------------------------------------------------------------------
inline Scene::SceneManageType Scene::GetSceneManageType()
{
	return mSceneManageType;
}
//----------------------------------------------------------------------------
inline const Sizef &Scene::GetSize() const
{
	return mSize;
}
//----------------------------------------------------------------------------